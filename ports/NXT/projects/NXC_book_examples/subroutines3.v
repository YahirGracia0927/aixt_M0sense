inline void turn_around

const (
pwr 
turntime
)

{
 on_rev(motor_c, pwr)
 sleep(turntime)
 forward(motor_ac, pwr)
}


 forward(motor_ac, 75)
 sleep(1000)
 turn_around(75, 2000)
 sleep(2000)
 turn_around(75, 500)
 sleep(1000)
 turn_around(75, 3000)
 off(motor_ac)
