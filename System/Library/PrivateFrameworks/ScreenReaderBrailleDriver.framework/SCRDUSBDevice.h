/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:05 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderBrailleDriver.framework/ScreenReaderBrailleDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ScreenReaderBrailleDriver/ScreenReaderBrailleDriver-Structs.h>
@class NSString;

@interface SCRDUSBDevice : NSObject {

	IOUSBDeviceStruct300* _device;
	IOUSBInterfaceStruct220* _interface;
	BOOL _isOpen;
	BOOL _isConfigured;
	NSString* _privateRunLoopMode;
	IONotificationPortRef _notificationPort;
	unsigned _notification;

}
-(int)product;
-(void)dealloc;
-(BOOL)reset;
-(BOOL)setConfiguration:(unsigned char)arg1 ;
-(BOOL)close;
-(BOOL)setInterface:(unsigned char)arg1 ;
-(int)vendor;
-(BOOL)open;
-(BOOL)isOpen;
-(void)registerForDisconnectNotifications:(BOOL)arg1 ;
-(BOOL)openWithSeize:(BOOL)arg1 ;
-(unsigned long long)_transferData:(void*)arg1 withSize:(unsigned long long)arg2 toPipe:(unsigned char)arg3 withTimeout:(double)arg4 withFunction:(/*function pointer*/void*)arg5 ;
-(unsigned char)numberOfConfigurations;
-(BOOL)setAlternateInterface:(unsigned char)arg1 ;
-(BOOL)sendControlRequest:(unsigned char)arg1 type:(unsigned char)arg2 value:(unsigned short)arg3 index:(unsigned short)arg4 data:(void*)arg5 size:(unsigned short)arg6 sizeTransferred:(unsigned long long*)arg7 pipe:(unsigned char)arg8 timeout:(double)arg9 ;
-(unsigned long long)writeData:(void*)arg1 withSize:(unsigned long long)arg2 toPipe:(unsigned char)arg3 withTimeout:(double)arg4 ;
-(BOOL)writeData:(void*)arg1 withSize:(unsigned long long)arg2 toBulkPipe:(unsigned char)arg3 withNoDataTimeout:(unsigned)arg4 andCompletionTimeOut:(unsigned)arg5 ;
-(unsigned long long)readData:(void*)arg1 withSize:(unsigned long long)arg2 fromPipe:(unsigned char)arg3 withTimeout:(double)arg4 ;
-(BOOL)readData:(void*)arg1 withSize:(unsigned long long*)arg2 fromPipe:(unsigned char)arg3 ;
-(unsigned long long)readData:(void*)arg1 withSize:(unsigned long long)arg2 fromBulkPipe:(unsigned char)arg3 withNoDataTimeout:(unsigned)arg4 andCompletionTimeOut:(unsigned)arg5 ;
-(BOOL)getInformationForPipe:(unsigned char)arg1 direction:(char*)arg2 number:(char*)arg3 transferType:(char*)arg4 maxPacketSize:(unsigned short*)arg5 interval:(char*)arg6 ;
-(void)abortPipe:(unsigned char)arg1 ;
-(BOOL)clearPipe:(unsigned char)arg1 bothEnds:(BOOL)arg2 ;
-(id)initWithIOObject:(unsigned)arg1 ;
-(BOOL)isConfigured;
@end

