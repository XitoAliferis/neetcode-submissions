class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        
        ## check rows
        for x in board:
            rowSet = set()
            for y in x:
                if y != ".":
                    if y not in rowSet:
                        rowSet.add(y)
                    else:
                        return False
        
        ## check cols
        for x in zip(*board):
            colSet = set()
            for y in x:
                if y != ".":
                    if y not in colSet:
                        colSet.add(y)
                    else:
                        return False

        ## check 3x3
        for s in range(9):
            threeSet = set()
            for x in range(3):
               for y in range(3):
                    row = (s//3)*3+x
                    col = (s%3)*3+y
                    if board[row][col] != ".":
                        if board[row][col] not in threeSet:
                            threeSet.add(board[row][col])
                        else:
                            return False

        return True