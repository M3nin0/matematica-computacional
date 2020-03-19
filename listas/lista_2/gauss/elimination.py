import numpy as np


def gaussian_elimination(arr: np.ndarray) -> np.ndarray:
    """Método da eliminação gaussiana

    Args:
        arr (np.ndarray): Matriz estendida com os coeficientes e termos independentes
    Returns:
        np.ndarray: Matriz reduzida
    """

    _arr = arr.copy()

    for index in np.arange(0, _arr.shape[0] - 1):
        pivot = _arr[index, index]
        pivot_line = _arr[index, :]

        for actual_line_index in np.arange(index + 1, _arr.shape[0]):
            actual_line = _arr[actual_line_index, :]
            actual_line_element = _arr[actual_line_index, index]

            line_mp = actual_line_element / pivot
            _arr[actual_line_index, :] = actual_line - (pivot_line * line_mp)
    return _arr
