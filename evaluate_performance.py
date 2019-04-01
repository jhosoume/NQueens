import timeit
import numpy as np

board_size = range(9-5)
max_size = range(8, 12)
setup = "import subprocess;"

single_queen = """
subprocess.call("./sq {num} {num} {num} 0", shell=True)
"""

naive = """
subprocess.call("./sq {num} {num} {num} 0", shell=True)
"""

algorithms = [single_queen, naive]

sols = np.zeros((12, 3, 2))

for size in board_size:
    sols[size][0][0] = sols[size][0][1] = size
    for type_alg, algorithm in enumerate(algorithms):
        result = timeit.repeat(repeat = 1000, number = 1,
                               stmt = algorithm.format(num = size),
                               setup = setup)
        sols[size][1][type_alg] = np.mean(result)
        sols[size][2][type_alg] = np.var(result)

np.savetxt('results_sg.out', sols[:,:,0])
np.savetxt('results_naive.out', sols[:,:,1])
