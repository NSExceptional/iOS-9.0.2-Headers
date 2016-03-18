/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:39 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, TKSmartCardATR, NSString, TKSmartCardSlotProxy, TKSmartCardSlotScreen;

@interface TKSmartCardSlot : NSObject {

	NSXPCConnection* _connection;
	long long _powerState;
	long long _shareState;
	BOOL _securePINVerificationSupported;
	BOOL _securePINChangeSupported;
	long long _state;
	TKSmartCardATR* _ATR;
	NSString* _name;
	long long _maxInputLength;
	long long _maxOutputLength;
	TKSmartCardSlotProxy* _proxy;

}

@property (readonly) long long powerState; 
@property (readonly) long long shareState; 
@property (readonly) BOOL securePINVerificationSupported; 
@property (readonly) BOOL securePINChangeSupported; 
@property (readonly) TKSmartCardSlotScreen * screen; 
@property (assign) long long state;                                       //@synthesize state=_state - In the implementation block
@property (retain) TKSmartCardATR * ATR;                                  //@synthesize ATR=_ATR - In the implementation block
@property (nonatomic,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long maxInputLength;                  //@synthesize maxInputLength=_maxInputLength - In the implementation block
@property (nonatomic,readonly) long long maxOutputLength;                 //@synthesize maxOutputLength=_maxOutputLength - In the implementation block
@property (nonatomic,readonly) TKSmartCardSlotProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queue; 
@property (assign) long long shareState;                                  //@synthesize shareState=_shareState - In the implementation block
@property (assign) long long powerState;                                  //@synthesize powerState=_powerState - In the implementation block
@property (assign) BOOL securePINVerificationSupported;                   //@synthesize securePINVerificationSupported=_securePINVerificationSupported - In the implementation block
@property (assign) BOOL securePINChangeSupported;                         //@synthesize securePINChangeSupported=_securePINChangeSupported - In the implementation block
+(void)slotWithEndpoint:(id)arg1 reply:(/*^block*/id)arg2 ;
-(TKSmartCardSlotScreen *)screen;
-(void)getAttrib:(unsigned)arg1 expectedLength:(unsigned)arg2 reply:(/*^block*/id)arg3 ;
-(void)setAttrib:(unsigned)arg1 data:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)control:(id)arg1 data:(id)arg2 expectedLength:(unsigned)arg3 reply:(/*^block*/id)arg4 ;
-(id)userInteractionForConfirmation;
-(id)userInteractionForStringEntry;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSString *)name;
-(void)invalidate;
-(TKSmartCardSlotProxy *)proxy;
-(long long)maxOutputLength;
-(TKSmartCardATR *)ATR;
-(void)setATR:(TKSmartCardATR *)arg1 ;
-(long long)shareState;
-(void)setShareState:(long long)arg1 ;
-(void)connectToEndpoint:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)remoteSlotWithErrorHandler:(/*^block*/id)arg1 ;
-(id)makeSmartCard;
-(long long)maxInputLength;
-(BOOL)securePINVerificationSupported;
-(void)setSecurePINVerificationSupported:(BOOL)arg1 ;
-(BOOL)securePINChangeSupported;
-(void)setSecurePINChangeSupported:(BOOL)arg1 ;
-(void)setPowerState:(long long)arg1 ;
-(long long)powerState;
@end

