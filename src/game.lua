local function game()
   math.randomseed(os.time())

   local min = 1
   local max = 100
   
   local random_num = math.random(min, max)
   local tries = 0

   print("Please enter a number between 1 - 100")

   while true do
	  local player_num = io.read("*number")

	  if player_num > random_num then
		 print("Number is too high")
		 tries = tries + 1
	  elseif player_num < random_num then
		 print("Number is too low")
		 tries = tries + 1
	  else
		 print("YOU HAVE WON!!!!!!!\nTries: " .. tries .. "\nNumber: " .. random_num .. "\n")
		 return 0
	  end
   end
end

game()
