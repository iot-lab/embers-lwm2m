building the border router

	cd border-router
	make

building the lwm2m client

	cd lwm2m-client
	make


building the sample coap server

	cd coap-server
	make


running an experiment

	experiment-cli submit -n tsch -d 60 -l 10,archi=m3:at86rf231+site=lille
	experiment-cli wait

	experiment-cli get -ri

	# assuming you get nodes: m3-100 and m3-102

	# run the following command in a separate terminal
	ssh lille.iot-lab.info sudo tunslip6.py -v2 -L -a m3-100 -p 20000 2001:660:4403:0480::/64

	# then flash the nodes
	node-cli -up border-router/border-router.iotlab-m3 -l lille,m3,100
	node-cli -up lwm2m-client/lwm2m-example-client.iotlab-m3 -l lille,m3,102

	# wait 1-2 minutes for the node to come up
	# use the following to poll the border router status:

	curl -6 'http://[2001:660:4403:480::8973]/'

	# until you see node m3-102 in the list:

	2001:660:4403:480::a473 (parent: 2001:660:4403:480::8973) 1799s

	# and/or check the leshan.eclipse.org web interface

	http://leshan.eclipse.org

	# until you see device: Contiki-00000000A473
	# at which point you may browse to:

	http://leshan.eclipse.org/#/clients/Contiki-00000000A473

	# then select data format (top right of the page):
	# =>  "single-value: TEXT"

	# and click "read" and/or "observe"



	# to check the lwm2m node debug output, use the following
	ssh lille.iot-lab.info nc m3-102 20000
