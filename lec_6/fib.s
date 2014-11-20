Main:
	jal Fib
	j 	Exit
Fib:
	addi $t0 $zero 9
	add  $t1 $zero $zero
	addi $t2 $zero 1
	j    Loop
Loop:
	beq  $t0 $zero Exit
	add  $t3 $t2   $zero
	add  $t2 $t2   $t1
	add  $t1 $t3   $zero
	addi $t0 $t0   -1
	j    Loop
Exit