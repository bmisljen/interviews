.PHONY: clean All

All:
	@echo "----------Building project:[ projects - Debug ]----------"
	@"$(MAKE)" -f  "projects.mk"
clean:
	@echo "----------Cleaning project:[ projects - Debug ]----------"
	@"$(MAKE)" -f  "projects.mk" clean
