LIBINCL	:= $(INCLUDEDIR)/mISDNlib.h
PROGS	:= testcon testcon_l2 testlayer3 loadfirm sendhwctrl testlayer1 misdnportinfo
# PROGS   := testcon testnet loadfirm logger

all: $(PROGS)

install:
	for i in $(PROGS) ; do \
		install -m 755 $$i $(INSTALL_PREFIX)/usr/bin ;\
	done

misdnportinfo: misdnportinfo.o $(mISDNLIB)
	$(CC) $^ $(LDFLAGS) $(LDFLAGS_EXTRA) -o $@

testcon: testcon.o $(mISDNLIB)
	$(CC) $^ $(LDFLAGS) $(LDFLAGS_EXTRA) -o $@

testlayer3: testlayer3.o $(mISDNLIB)
	$(CC) $^ $(LDFLAGS) $(LDFLAGS_EXTRA) -o $@

testnet: testnet.o $(mISDNLIB)
	$(CC) $^ $(LDFLAGS) $(LDFLAGS_EXTRA) -o $@

testcon_l2: testcon_l2.o $(mISDNLIB)
	$(CC) $^ $(LDFLAGS) $(LDFLAGS_EXTRA) -o $@

loadfirm: loadfirm.o $(mISDNLIB)
	$(CC) $^ $(LDFLAGS) $(LDFLAGS_EXTRA) -o $@

sendhwctrl: sendhwctrl.o $(mISDNLIB)
	$(CC) $^ $(LDFLAGS) $(LDFLAGS_EXTRA) -o $@

testlayer1: testlayer1.o $(mISDNLIB)
	$(CC) $^ $(LDFLAGS) $(LDFLAGS_EXTRA) -o $@

logger: logger.o $(mISDNLIB)
	$(CC) $^ $(LDFLAGS) $(LDFLAGS_EXTRA) -o $@

misdnportinfo.o : misdnportinfo.c $(LIBINCL)


testcon.o : testcon.c ../include/l3dss1.h $(LIBINCL)

testlayer3.o : testlayer3.c ../include/l3dss1.h $(LIBINCL)

testnet.o : testnet.c ../include/l3dss1.h $(LIBINCL)

testcon_l2.o : testcon_l2.c ../include/l3dss1.h $(LIBINCL)

loadfirm.o: loadfirm.c $(LIBINCL)

sendhwctrl.o: sendhwctrl.c $(LIBINCL)

logger.o: logger.c $(LIBINCL)


clean:
	rm -f *.o *~ DEADJOE

distclean: clean
	rm -f *.a $(PROGS)
