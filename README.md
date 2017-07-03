# Testing
First compile code with `catkin_make` or `catkin build` and then run the accompanied launch file:
`roslaunch test_gazebo8 test.launch` 

## Expected output
In Gazebo 7 (tested with 7.4) the expected output is something like:
```bash
[ INFO] [1499083983.423210418, 0.203000000]: Gazebo started. Starting loop
[ INFO] [1499083983.423258111, 0.203000000]: Starting iteration 0
[ INFO] [1499083984.223547626, 1.000000000]: Got link_states!
[ INFO] [1499083985.226454890, 2.000000000]: Got link_states!
[ INFO] [1499083986.233047563, 3.000000000]: Got link_states!
[ INFO] [1499083987.238373358, 4.000000000]: Got link_states!
[ INFO] [1499083988.243084799, 5.000000000]: Got link_states!
[ INFO] [1499083988.460649478, 5.216000000]: Ending iteration 0
[ INFO] [1499083988.460723512, 5.216000000]: Starting iteration 1
[ INFO] [1499083989.246983436, 6.000000000]: Got link_states!
[ INFO] [1499083990.251303354, 7.000000000]: Got link_states!
[ INFO] [1499083991.266260549, 8.000000000]: Got link_states!
[ INFO] [1499083992.271432231, 9.000000000]: Got link_states!
[ INFO] [1499083993.276270854, 10.000000000]: Got link_states!
```

In Gazebo 8 (tested with 8.1.1) the output is instead:
```bash
[ INFO] [1499082452.365551220, 0.247000000]: Gazebo started. Starting loop
[ INFO] [1499082452.365563268, 0.247000000]: Starting iteration 0
[ INFO] [1499082453.119217355, 1.000000000]: Got link_states!
[ INFO] [1499082454.120610593, 2.000000000]: Got link_states!
[ INFO] [1499082455.123890395, 3.000000000]: Got link_states!
[ INFO] [1499082456.221480809, 4.001000000]: Got link_states!
[ INFO] [1499082457.217972288, 5.001000000]: Got link_states!
[ INFO] [1499082457.465672239, 5.252000000]: Ending iteration 0
[ INFO] [1499082457.465704627, 5.252000000]: Starting iteration 1
[ INFO] [1499082462.783421969, 10.263000000]: Ending iteration 1
[ INFO] [1499082462.783455855, 10.263000000]: Starting iteration 2
[ INFO] [1499082468.489491249, 15.299000000]: Ending iteration 2
[ INFO] [1499082468.489523642, 15.299000000]: Starting iteration 3
[ INFO] [1499082473.496997661, 20.323000000]: Ending iteration 3
[ INFO] [1499082473.497029367, 20.323000000]: Starting iteration 4
[ INFO] [1499082478.510929082, 25.328000000]: Ending iteration 4
[ INFO] [1499082478.510962179, 25.328000000]: Ending 'test_gazebo8_node'

```
