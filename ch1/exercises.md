# Exercises - Chapter 1

## 1

First, we discover Bernie's data transmission rate in 18 km:
$$
\frac{3 \cdot 10^9}{3600} \approx 0,83 \cdot 10^6
$$

And now find the factor $x$ by which to multiply Bernie's rate so that it will be equal to the
transmission line:

$$
\begin{aligned}
0,83 \cdot 10^6 x &= 150 \cdot 10^6 \\
x &= \frac{150 \cdot 10^6}{0,83 \cdot 10^6} \\
x &\approx 180
\end{aligned}
$$

Now we divide the initial distance by this factor

$$
18 \text{km} / 180 = 0,1 \text{km} = 100 \text{m}
$$

That is, for distances < 100 meters, Bernie has a higher data rate.

* i: Distances < 200 meters
* ii: Distances < 200 meters
* iii: Distances < 50 meters

## 2

* High availability/responsiveness, since the timesharing would need to coordinate many users
timeshares.
* Scalability, since timesharing would need extensive reconfiguration for supporting each new
user

## 3

Networks that exhibit a batch of bits that needs to travel long distances have a high bandwidth
and a high latency, such as satellite internet.
Networks that exhibit a direct connection between client-server, but have limited bits/sec, are
examples of networks with low latency and low bandwidth.

## 4

TODO

Reliability

## 5

TODO

## 6

The speed of the bits propagation times twice the distance (80,000 km)

## 7

The same that affect current computer networks: Security, reliability, privacy and misinformation.

## 8

TODO

## 18

Yes, the other 3 services between adjacent layers.

## 24

TCP is a protocol that emphasizes reliability, while UDP doesn't. Also, the former
is connection-oriented, while the later is connectionless.

## 30

First, we find the total size of the image in bits, which is
$3 \cdot 1600 \cdot 1200 = 576 \cdot 10^4$. Now, the amount of time will take is obtained by
diving the total image size by the data rate in bits/sec.

* 56-kbps modem channel: $576 \cdot 10^4 / 56 \cdot 10^3 \approx 102,8$ secs
* 1-Mbps cable modem: $576 \cdot 10^4 / 10^6 = 5,76$ secs
* 10-Mbps Ethernet: $576 \cdot 10^4 / 10^7 = 0,576$ secs or $576$ millisecs
* 100-Mbps Ethernet: $576 \cdot 10^4 / 10 ^ 8 = 0,0576$ secs
* 1-Gbps Ethernet: $576 \cdot 10^4 / 10 ^ 9 = 0,00576$ secs

## 33

Advantages are that the consumer doesn't need to worry about interoperability,
and that standardization allows the market to grow stronger.

Disadvantages are those of having decisions centralized on a single body that is subject to
failures, and the cost of adapting to the standards.

## 35

This doesn't impact the adjacent layers, because their own operations are abstracted from
layer $k$'s internals.

## 36

They must adapt, since a service provided by an adjacent layer may be a dependency for
a service the layer $k$ provides.

## 44

[Some of the largest IXPs by size](https://en.wikipedia.org/wiki/List_of_Internet_exchange_points_by_size) are IX.br, Equinix and DE-CIX.

## 45

In `layers.c`
