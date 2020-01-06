all:
	@cd asm_my && make && mv asm .. 
	@cd cor && make
clean:
	@cd asm_my && make clean
	@cd cor && make clean
fclean: clean
	@rm -f asm corewar
re: fclean all
