localhost: app.localhost

ar7: app.ar7

wp7: app.wp7

ar86: app.ar86

wp85: app.wp85

app.%:
	mkapp eventsBetweenComponents.adef -t $* -v

clean:
	rm -rf _build_* *.update

install:
	app install eventsBetweenComponents.wp85.update 192.168.2.2
start:
	app start eventsBetweenComponents 192.168.2.2
stop:	
	app stop eventsBetweenComponents 192.168.2.2
	
