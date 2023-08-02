I need to memorise them coz my English is bad.Yep I have learned them in Chinese but it is another thing that I say them in English.


Performance is the degree to which a software system or component meets its objectives for timeliness.
Scalability is the capability of a system, network, or process to handle a growing amount of work, or its potential to be enlarged to accommodate that growth
Vertical scaling refers to the approach of scaling a system by adding resources (memory, CPU, disk, etc.) to a single node. Meanwhile, horizontal scaling refers to the approach of scaling by adding more nodes to the system.
In the context of software systems, availability is the probability of a system to work as required, when required, during a mission.
Redundancy is one of the widely used mechanisms to achieve higher availability. It refers to storing data into multiple, redundant computers
The difference in developing software for distributed systems
Fallacies
The network is reliable
Latency is zero
Bandwidth is infinite
The network is secure
Topology doesn’t change
Transport cost is zero
The global clock fallacy

Why distributed systems are hard to design
Properties that make distributed systems challenging
Network asynchrony
Partial failures

Measures of Correctness
Safety
Liveness
Example of a correct system

Properties each system follows
The main important properties in a distributed system concern the following:

How the nodes of a distributed system interact with each other
How the nodes of a distributed system can fail
Categories of distributed systems
There are two main categories of distributed systems that depend on the nature of communication:

Synchronous systems
Asynchronous systems

Types of failures
Fail-stop
A node halts and remains halted permanently. Other nodes can detect that the node has failed (i.e., by communicating with it).
Crash
A node halts, but silently. So, other nodes may not be able to detect this state. They can only assume its failure when they are unable to communicate with it.
Omission
A node fails to respond to incoming requests.
Byzantine
A node exhibits arbitrary behavior: it may transmit arbitrary messages at arbitrary times, take incorrect steps, or stop.
Concurrency
