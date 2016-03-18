/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libextension.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libextension.dylib/libextension.dylib-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/_NSExtensionAuxHostingBase.h>

@protocol _NSExtensionContextHosting, _NSExtensionContextVending;
@class NSArray, NSUUID, NSXPCConnection, NSXPCListener, NSString;

@interface NSExtensionContext : NSObject <NSSecureCoding, NSCopying, NSXPCListenerDelegate, _NSExtensionAuxHostingBase> {

	BOOL __dummyExtension;
	NSArray* _inputItems;
	NSUUID* __UUID;
	/*^block*/id __requestCleanUpBlock;
	id<_NSExtensionContextHosting> __extensionHostProxy;
	id<_NSExtensionContextVending> __extensionVendorProxy;
	NSXPCConnection* __auxiliaryConnection;
	NSXPCListener* __auxiliaryListener;
	id __principalObject;

}

@property (nonatomic,copy) NSArray * inputItems;                                                                                 //@synthesize inputItems=_inputItems - In the implementation block
@property (nonatomic,copy) NSUUID * _UUID;                                                                                       //@synthesize _UUID=__UUID - In the implementation block
@property (setter=_setRequestCleanUpBlock:,nonatomic,copy) id _requestCleanUpBlock;                                              //@synthesize _requestCleanUpBlock=__requestCleanUpBlock - In the implementation block
@property (setter=_setExtensionHostProxy:,nonatomic,retain) id<_NSExtensionContextHosting> _extensionHostProxy;                  //@synthesize _extensionHostProxy=__extensionHostProxy - In the implementation block
@property (setter=_setExtensionVendorProxy:,nonatomic,retain) id<_NSExtensionContextVending> _extensionVendorProxy;              //@synthesize _extensionVendorProxy=__extensionVendorProxy - In the implementation block
@property (setter=_setAuxiliaryConnection:,nonatomic,retain) NSXPCConnection * _auxiliaryConnection;                             //@synthesize _auxiliaryConnection=__auxiliaryConnection - In the implementation block
@property (setter=_setAuxiliaryListener:,nonatomic,retain) NSXPCListener * _auxiliaryListener;                                   //@synthesize _auxiliaryListener=__auxiliaryListener - In the implementation block
@property (assign,setter=_setPrincipalObject:,nonatomic) id _principalObject;                                                    //@synthesize _principalObject=__principalObject - In the implementation block
@property (assign,setter=_setDummyExtension:,getter=_isDummyExtension,nonatomic) BOOL _dummyExtension;                           //@synthesize _dummyExtension=__dummyExtension - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionContextForIdentifier:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(void)initialize;
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionContextHostProtocol;
+(id)_extensionContextVendorProtocol;
+(id)_extensionContextHostProtocolAllowedClassesForItems;
-(id)_derivedExtensionAuxiliaryHostProtocol;
-(NSUUID *)_UUID;
-(id<_NSExtensionContextVending>)_extensionVendorProxy;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(id)_principalObject;
-(NSArray *)inputItems;
-(void)cancelRequestWithError:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)invalidate;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setRequestCleanUpBlock:(/*^block*/id)arg1 ;
-(NSXPCConnection *)_auxiliaryConnection;
-(void)completeRequestReturningItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_setExtensionHostProxy:(id)arg1 ;
-(void)_willPerformHostCallback:(/*^block*/id)arg1 ;
-(void)_setPrincipalObject:(id)arg1 ;
-(void)___nsx_pingHost:(/*^block*/id)arg1 ;
-(id)initWithInputItems:(id)arg1 contextUUID:(id)arg2 ;
-(id)initWithInputItems:(id)arg1 ;
-(void)_completeRequestReturningItemsSecondHalf:(/*^block*/id)arg1 ;
-(BOOL)_isHost;
-(BOOL)_isDummyExtension;
-(void)didConnectToVendor:(id)arg1 ;
-(void)_loadItemForPayload:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_loadPreviewImageForPayload:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setInputItems:(id)arg1 ;
-(void)set_UUID:(NSUUID *)arg1 ;
-(id)_requestCleanUpBlock;
-(id<_NSExtensionContextHosting>)_extensionHostProxy;
-(void)_setExtensionVendorProxy:(id)arg1 ;
-(void)_setAuxiliaryConnection:(id)arg1 ;
-(NSXPCListener *)_auxiliaryListener;
-(void)_setAuxiliaryListener:(id)arg1 ;
-(void)_setDummyExtension:(BOOL)arg1 ;
@end

