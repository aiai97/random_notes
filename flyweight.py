class InsurancePolicy:
    def __init__(self, product_type, status):
        self.product_type = product_type  # 内部状态
        self.status = status  # 内部状态
        self.policy_holder = None  # 外部状态，被保险人姓名
        self.beneficiary = None  # 外部状态，受益人信息

    def set_policy_holder(self, policy_holder):
        self.policy_holder = policy_holder

    def set_beneficiary(self, beneficiary):
        self.beneficiary = beneficiary

    def display(self):
        print(f"保单信息：类型-{self.product_type}, 状态-{self.status}, 被保险人-{self.policy_holder}, 受益人-{self.beneficiary}")


class PolicyFactory:
    def __init__(self):
        self.policy_pool = {}  # 享元池

    def get_policy(self, product_type, status):
        # 从享元池中获取保单对象，如果不存在则创建新的
        key = (product_type, status)
        if key not in self.policy_pool:
            policy = InsurancePolicy(product_type, status)
            self.policy_pool[key] = policy
        return self.policy_pool[key]


# 客户端代码
if __name__ == "__main__":
    factory = PolicyFactory()

    # 创建保单对象并设置外部状态
    policy1 = factory.get_policy("寿险", "生效")
    policy1.set_policy_holder("Alice")
    policy1.set_beneficiary("Bob")

    policy2 = factory.get_policy("车险", "待生效")
    policy2.set_policy_holder("Eve")
    policy2.set_beneficiary("Mallory")

    policy3 = factory.get_policy("寿险", "失效")
    policy3.set_policy_holder("Charlie")
    policy3.set_beneficiary("David")

    # 显示保单信息
    policy1.display()
    policy2.display()
    policy3.display()
