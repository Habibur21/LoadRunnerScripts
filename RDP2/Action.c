Action()
{

	rdp_connect_server("Host=habiburr01", 
		"UserName=NTNET\\habiburr", 
		"EncryptedPassword=59d38447e", 
		"Domain=", 
		RDP_LAST);

	rdp_set_lock("StepDescription=Lock Key Set 1", 
		"LockKeyValue=VK_NUMLOCK", 
		RDP_LAST);

	lr_think_time(19);

	rdp_sync_on_image("StepDescription=Image Synchronization 1", 
		"WaitFor=Appear", 
		"AddOffsetToInput=Default", 
		IMAGEDATA, 
		"ImageLeft=935", "ImageTop=708", "ImageWidth=40", "ImageHeight=40", "ImageName=snapshot_2.png", ENDIMAGE, 
		RDP_LAST);

	rdp_mouse_click("StepDescription=Mouse Click 1", 
		"Snapshot=snapshot_1.inf", 
		"MouseX=955", 
		"MouseY=728", 
		"MouseButton=LEFT_BUTTON", 
		"Origin=Default", 
		RDP_LAST);

	rdp_sync_on_image("StepDescription=Image Synchronization 2", 
		"WaitFor=Appear", 
		"AddOffsetToInput=Default", 
		IMAGEDATA, 
		"ImageLeft=864", "ImageTop=589", "ImageWidth=40", "ImageHeight=40", "ImageName=snapshot_4.png", ENDIMAGE, 
		RDP_LAST);

	rdp_mouse_click("StepDescription=Mouse Click 2", 
		"Snapshot=snapshot_3.inf", 
		"MouseX=884", 
		"MouseY=609", 
		"MouseButton=LEFT_BUTTON", 
		"Origin=Default", 
		RDP_LAST);

	rdp_sync_on_image("StepDescription=Image Synchronization 3", 
		"WaitFor=Appear", 
		"AddOffsetToInput=Default", 
		IMAGEDATA, 
		"ImageLeft=880", "ImageTop=626", "ImageWidth=40", "ImageHeight=40", "ImageName=snapshot_6.png", ENDIMAGE, 
		RDP_LAST);

	rdp_mouse_click("StepDescription=Mouse Click 3", 
		"Snapshot=snapshot_5.inf", 
		"MouseX=900", 
		"MouseY=646", 
		"MouseButton=LEFT_BUTTON", 
		"Origin=Default", 
		RDP_LAST);

	/*	This script contains keyboard steps without automatic synchronization.
		Consider adding a synchronization step before the relevant keyboard steps.*/

	rdp_type("StepDescription=Typed Text 1", 
		"Snapshot=snapshot_7.inf", 
		"TypedKeys=Sabila26", 
		RDP_LAST);

	lr_think_time(4);

	rdp_key("StepDescription=Key Press 1", 
		"Snapshot=snapshot_8.inf", 
		"KeyValue=VK_RETURN", 
		RDP_LAST);

	lr_think_time(86);

	rdp_sync_on_image("StepDescription=Image Synchronization 4", 
		"WaitFor=Appear", 
		"AddOffsetToInput=Default", 
		IMAGEDATA, 
		"ImageLeft=822", "ImageTop=518", "ImageWidth=40", "ImageHeight=40", "ImageName=snapshot_11.png", ENDIMAGE, 
		RDP_LAST);

	rdp_mouse_click("StepDescription=Mouse Click 4", 
		"Snapshot=snapshot_10.inf", 
		"MouseX=842", 
		"MouseY=538", 
		"MouseButton=LEFT_BUTTON", 
		"Origin=Default", 
		RDP_LAST);

	rdp_sync_on_image("StepDescription=Image Synchronization 5", 
		"WaitFor=Appear", 
		"AddOffsetToInput=Default", 
		IMAGEDATA, 
		"ImageLeft=824", "ImageTop=513", "ImageWidth=40", "ImageHeight=40", "ImageName=snapshot_13.png", ENDIMAGE, 
		RDP_LAST);

	rdp_mouse_click("StepDescription=Mouse Click 5", 
		"Snapshot=snapshot_12.inf", 
		"MouseX=844", 
		"MouseY=533", 
		"MouseButton=LEFT_BUTTON", 
		"Origin=Default", 
		RDP_LAST);

	rdp_disconnect_server("StepDescription=Server Disconnect 1", 
		RDP_LAST);

	return 0;
}