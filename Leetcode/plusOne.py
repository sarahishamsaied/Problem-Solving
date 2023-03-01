def plusOne(digits):
    """
    :type digits: List[int]
    :rtype: List[int]
    """
    num = int(''.join([str(i) for i in digits]))
    num += 1
    return [int(i) for i in str(num)]