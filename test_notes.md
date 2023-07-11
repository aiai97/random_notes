创建（Create）：

测试项：
确保能够成功创建新的对象。
验证创建后的对象是否存在于数据库或持久存储中。
测试逻辑：
调用创建方法，传入合适的参数。
验证方法返回的错误是否为 nil，表示创建成功。
验证创建的对象是否存在于数据库或持久存储中。
读取（Retrieve）：

测试项：
确保能够成功从数据库或持久存储中读取对象。
验证读取的对象与预期结果是否一致。
测试逻辑：
创建一个或多个对象，并将其存储到数据库或持久存储中。
调用读取方法，传入合适的参数。
验证方法返回的错误是否为 nil，表示读取成功。
验证读取的对象与预期结果是否一致。
更新（Update）：

测试项：
确保能够成功更新数据库或持久存储中的对象。
验证更新后的对象与预期结果是否一致。
测试逻辑：
创建一个对象并将其存储到数据库或持久存储中。
修改对象的属性或状态。
调用更新方法，传入合适的参数。
验证方法返回的错误是否为 nil，表示更新成功。
读取更新后的对象并验证其与预期结果是否一致。
删除（Delete）：

测试项：
确保能够成功从数据库或持久存储中删除对象。
验证删除后该对象不存在于数据库或持久存储中。
测试逻辑：
创建一个对象并将其存储到数据库或持久存储中。
调用删除方法，传入合适的参数。
验证方法返回的错误是否为 nil，表示删除成功。
尝试读取已删除的对象并验证其不存在于数据库或持久存储中。
```
package data_test

import (
	. "github.com/onsi/ginkgo"
	. "github.com/onsi/gomega"
	"time"
	"user/internal/biz"
	"user/internal/data"
)

var _ = Describe("User", func() {
	var ro biz.UserRepo
	var uD *biz.User
	BeforeEach(func() {
		// 这里的 Db 是 data_suite_test.go 文件里面定义的
		ro = data.NewUserRepo(Db, nil)
		// 这里你可以引入外部组装好的数据
		uD = &biz.User{
			ID:       1,
			Mobile:   "1476280182",
			Password: "admin123456",
			NickName: "aliliin",
			Role:     1,
		}
	})

	// 设置 It 块来添加单个规格
	It("CreateUser", func() {
		u, err := ro.CreateUser(ctx, uD)
		Ω(err).ShouldNot(HaveOccurred())
		// 组装的数据 mobile 为
		Ω(u.Mobile).Should(Equal("14776280182")) // 手机号应该为创建的时候写入的手机号
	})

	It("ListUser", func() {
		user, total, err := ro.ListUser(ctx, 1, 10)
		Ω(err).ShouldNot(HaveOccurred()) //获取列表不应该出现错误
		Ω(user).ShouldNot(BeEmpty())     //结果不应该为空
		Ω(total).Should(Equal(1))        //总是应该为1
		Ω(len(user)).Should(Equal(1))
		Ω(user[0].Mobile).Should(Equal("14776280182"))
	})

	It("UpdateUser", func() {
		birthday := time.Unix(int64(693646426), 0)
		uD.NickName = "aiai"
		uD.Birthday = &birthday
		uD.Gender = "female"
		user, err := ro.UpdateUser(ctx, uD)
		Ω(err).ShouldNot(HaveOccurred())
		Ω(user).Should(BeTrue())
	})

	It("CheckPassword", func() {
		p1 := "admin"
		encryptedPassword := "$pbkdf2-sha512$tyx8jd1Q0G6JZR35$0005b73a1236cbd5f5842f59424f3ab98a769fbd80cbd3823f56e25c20865d17"
		password, err := ro.CheckPassword(ctx, p1, encryptedPassword)
		Ω(err).ShouldNot(HaveOccurred()) // 密码验证通过
		Ω(password).Should(BeTrue())     // 结果应该为true

		encryptedPassword1 := "$pbkdf2-sha512$5p7doUNIS9I5mvhA$b18171ff58b04c02ed70ea4f39"
		password1, err := ro.CheckPassword(ctx, p1, encryptedPassword1)
		if err != nil {
			return
		}
		Ω(err).ShouldNot(HaveOccurred())
		Ω(password1).Should(BeFalse()) // 密码验证不通过
	})
})
```
