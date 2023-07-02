import Data.List
import Data.Bool

-- first find the max elem of the list

findMax :: [Int] -> Int -> Int
findMax [] n = n
findMax (x:xs) n | x > n = findMax xs x 
                | otherwise = n

-- add the extra candy to all elements see if it is greater or equal than max

findSoln :: [Int] -> Int -> Int -> [Bool]
findSoln [] _ max = []
findSoln (x:xs) n  max | (x + n) < max = [False]  ++ findSoln xs n max
                    | otherwise = [True] ++ findSoln xs n max

-- add a function the handle the user input and get the result

handleUserInput :: [Int] -> Int -> [Bool]
handleUserInput lst n = findSoln lst n (findMax lst 0)