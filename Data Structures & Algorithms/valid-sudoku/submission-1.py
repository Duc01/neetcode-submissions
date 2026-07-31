class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        rows = defaultdict(set)
        cols = defaultdict(set)
        squares = defaultdict(set)
        for i in range(9):
            for j in range(9):
                elem = board[i][j]
                if elem == ".":
                    continue
                if elem in rows[i] or elem in cols[j] or elem in squares[(i//3, j//3)]:
                    return False
                else:
                    rows[i].add(elem)
                    cols[j].add(elem)
                    squares[(i//3, j//3)].add(elem)
        return True