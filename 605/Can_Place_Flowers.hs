import Data.List
import Data.Bool

-- define helper that keeps left val
helpMax :: [Int] -> Int -> Int
helpMax [x] left | left == 0 && x == 0 = 1
                | otherwise = 0
helpMax (x:right:xs) left | (x == 0 && left == 0 && right == 0) = (helpMax (right:xs) 1) + 1
                        | (x == 0 && left == 1) = helpMax (right:xs) 0
                        | otherwise = helpMax (right:xs) 1


-- handle user input 
findSoln :: [Int] -> Int -> Bool
findSoln lst num | helpMax lst 0 < num = False
                | otherwise = True
