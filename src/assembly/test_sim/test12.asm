.data
.text
.globl main
main:

	addi gp, x0 , 1
	slli gp,gp,16
	addi gp,gp,1
	slli gp,gp,12
	
	addi a0,x0,-1
	
	sw a0, 8(gp)
	
	lw t1,8(gp)


	addi a0,x0,0xff
	#segment display
	sw a0, 4(gp)
	lw t2,4(gp)

	lw t3,8(gp)

	
	lw t4,4(gp)
