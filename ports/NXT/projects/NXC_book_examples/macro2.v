#define turn_right(s,t) \
 forward(motor_a, s)
 on_rev(motor_b, s)
 sleep(t)
#define turn_left(s,t) \
 on_rev(motor_a, s)
 forward(motor_b, s)
 sleep(t)
#define forwards(s,t)
forward(motor_ab, s)
sleep(t)
#define backwards(s,t) 
on_rev(motor_ab, s)
sleep(t)


 backwards(50,10000)
 forwards(50,10000)
 turn_left(75,750)
 forwards(75,1000)
 backwards(75,2000)
 forwards(75,1000)
 turn_right(75,750)
 forwards(30,2000)
 Off(motor_ab)
