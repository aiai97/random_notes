组合模式是一种结构型设计模式，它用于将对象组合成树形结构以表示部分-整体的层次结构。组合模式使得用户可以统一对待单个对象和组合对象，从而简化代码并提高系统的灵活性和可维护性。

在银行投保业务中，我们可以使用组合模式来表示投保业务的层次结构，例如一个保险产品可以包含多个附加险项目，而附加险项目又可以包含其他子附加险项目。这样就形成了一个树形的结构，使用组合模式可以方便地处理这种层次结构。

```
from typing import List

# 定义投保业务组件的抽象类
class InsuranceComponent:
    def calculate_premium(self) -> float:
        raise NotImplementedError("Subclasses must implement calculate_premium.")

# 叶子节点：保险产品
class InsuranceProduct(InsuranceComponent):
    def __init__(self, name: str, premium: float):
        self.name = name
        self.premium = premium

    def calculate_premium(self) -> float:
        return self.premium

# 组合节点：附加险项目
class AdditionalRider(InsuranceComponent):
    def __init__(self, name: str, premium: float, components: List[InsuranceComponent] = None):
        self.name = name
        self.premium = premium
        self.components = components if components else []

    def calculate_premium(self) -> float:
        total_premium = self.premium
        for component in self.components:
            total_premium += component.calculate_premium()
        return total_premium

# 示例用法
if __name__ == "__main__":
    # 创建保险产品
    basic_insurance = InsuranceProduct("Basic Insurance", 1000.0)
    additional_rider1 = InsuranceProduct("Additional Rider 1", 500.0)
    additional_rider2 = InsuranceProduct("Additional Rider 2", 300.0)

    # 创建附加险项目并添加子附加险项目
    combined_rider = AdditionalRider("Combined Rider", 200.0, [additional_rider1, additional_rider2])

    # 创建投保业务组合
    insurance_package = AdditionalRider("Insurance Package", 0.0, [basic_insurance, combined_rider])

    # 计算总保费
    total_premium = insurance_package.calculate_premium()
    print("Total Premium:", total_premium)

```
叶子节点（Leaf）：叶子节点是组合模式中的最基本的节点，它表示树形结构中的叶子或最终的子节点，不能再包含其他节点。在代码中，叶子节点通常是最小的单元，它们不再有子节点。在投保业务的例子中，InsuranceProduct就是一个叶子节点，表示单个保险产品。

组合节点（Composite）：组合节点是由一个或多个叶子节点和/或其他组合节点组成的节点，它们形成树形结构的中间节点。组合节点可以包含其他节点，即可以包含叶子节点，也可以包含其他组合节点。在代码中，AdditionalRider就是一个组合节点，它可以包含叶子节点（InsuranceProduct）和其他组合节点（AdditionalRider本身）。
单例模式：在银行保险业务中，可能需要确保某些对象只有一个实例，例如保险公司的配置信息、保险合同编号生成器等。单例模式可以确保一个类只有一个实例，并提供一个全局访问点。

责任链模式：在银行保险业务中，可能需要对保险理赔请求进行处理，但不同类型的理赔请求由不同的部门进行处理。责任链模式可以用来构建一个处理请求的链条，每个节点都尝试处理请求，如果无法处理，则将请求传递给下一个节点。

适配器模式：在银行保险业务中，可能需要与外部系统进行交互，但外部系统的接口与内部系统的接口不兼容。适配器模式可以用来将一个类的接口转换为客户端所期望的接口。

命令模式：在银行保险业务中，可能需要实现一些可撤销的操作，如客户撤销投保申请、理赔操作撤销等。命令模式可以用来封装请求为一个对象，使得客户端可以对请求进行参数化和延迟执行。

迭代器模式：在银行保险业务中，可能需要遍历保险合同列表、客户信息列表等数据结构。迭代器模式可以用来提供一种统一的方式来遍历不同类型的集合。

备忘录模式：在银行保险业务中，可能需要保存对象的历史状态，以便在需要时恢复到先前的状态，如保险合同的历史状态、客户信息的历史状态等。备忘录模式可以用来保存和恢复对象的状态。

组合模式：我们之前已经举例说明了组合模式，它适用于表示部分-整体的层次结构，例如保险产品和附加险项目之间的关系。

享元模式：在银行保险业务中，可能存在大量相似的对象，如保险合同中的保险计划。享元模式可以用来共享这些相似对象的公共部分，以节省内存和提高性能。

工厂方法模式：在银行保险业务中，可能需要根据客户的不同需求创建不同类型的保险产品。工厂方法模式可以用来封装对象的创建过程，根据不同的输入参数来创建不同类型的产品，从而使客户端代码与具体产品的创建过程解耦。

观察者模式：在银行保险业务中，可能需要实现一些监控和通知功能，如客户的保险到期提醒、保险赔付状态通知等。观察者模式可以用来实现事件监听和通知机制，当某个事件发生时，通知所有相关的观察者进行处理。

策略模式：在银行保险业务中，可能需要根据客户的不同情况定制不同的保险方案，如定期寿险、终身寿险、投资型保险等。策略模式可以用来封装不同的保险计算策略，并在运行时动态选择不同的策略来进行计算。

模板方法模式：在银行保险业务中，可能有一些保险产品的销售流程是相似的，只有某些步骤需要定制。模板方法模式可以用来定义一个算法框架，将可变的步骤留给子类去实现，从而使得算法的结构保持不变，但细节可以由子类来定制。

装饰器模式：在银行保险业务中，可能需要为保险产品添加一些额外的功能，如保险的附加险项目。装饰器模式可以用来动态地为对象添加额外的功能，而无需修改其原始代码。

状态模式：在银行保险业务中，可能需要根据保险合同的状态来实现不同的业务逻辑，如保险的投保、承保、理赔等状态。状态模式可以用来封装不同状态下的行为，并在运行时动态切换状态。
