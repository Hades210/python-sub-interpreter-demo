class C(object):
    pass


class Pool(object):
    def __del__(self):
        list()


C.pool = Pool()
