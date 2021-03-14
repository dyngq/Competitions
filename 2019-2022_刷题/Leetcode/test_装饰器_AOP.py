import logging

# def use_logging(func):
#     logging.warn("%s is running" % func.__name__)
#     func()
# def bar():
#     print('i am bar')
# use_logging(bar)

# def use_logging(func):
#     def wrapper(*args, **kwargs):
#         logging.warn("%s is running" % func.__name__)
#         return func(*args, **kwargs)
#     return wrapper
# # def bar():
# #     print('i am bar')
# # bar = use_logging(bar)
# # bar()
# @use_logging
# def foo():
#     print("i am foo")
# @use_logging
# def bar():
#     print("i am bar")
# bar()
# foo()

# def use_logging(level):
#     def decorator(func):
#         def wrapper(*args, **kwargs):
#             if level == "warn":
#                 logging.warn("%s is running" % func.__name__)
#             return func(*args)
#         return wrapper
#     return decorator

# @use_logging(level="warn")
# # @use_logging(level="321")
# def foo(name='foo'):
#     print("i am %s" % name)
# foo()

class Foo(object):
    def __init__(self, func):
        self._func = func
    def __call__(self):
        print ('class decorator runing')
        self._func()
        print ('class decorator ending')
        
@Foo
def bar():
    print ('bar')
bar()

# from functools import wraps
# def logged(func):
#     @wraps(func)
#     def with_logging(*args, **kwargs):
#         print(func.__name__ + " was called")
#         return func(*args, **kwargs)
#     return with_logging

# @logged
# def f(x):
#     """does some math"""
#     return x + x * x
# print(f(2),f.__name__,f.__doc__)