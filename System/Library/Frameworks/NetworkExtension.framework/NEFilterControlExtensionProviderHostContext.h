/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEFilterExtensionProviderHostContext.h>
#import <libobjc.A.dylib/NEFilterControlExtensionProviderProtocol.h>
#import <libobjc.A.dylib/NEFilterControlExtensionProviderHostProtocol.h>

@protocol NEFilterControlExtensionProviderHostDelegate;
@class NSString;

@interface NEFilterControlExtensionProviderHostContext : NEFilterExtensionProviderHostContext <NEFilterControlExtensionProviderProtocol, NEFilterControlExtensionProviderHostProtocol> {

	id<NEFilterControlExtensionProviderHostDelegate> _control_delegate;

}

@property (__weak) id<NEFilterControlExtensionProviderHostDelegate> control_delegate;              //@synthesize control_delegate=_control_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)startedWithError:(id)arg1 ;
-(void)handleNewFlow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)notifyRulesChanged;
-(void)provideRemediationMap:(id)arg1 ;
-(void)provideURLAppendStringMap:(id)arg1 ;
-(id<NEFilterControlExtensionProviderHostDelegate>)control_delegate;
-(void)setControl_delegate:(id<NEFilterControlExtensionProviderHostDelegate>)arg1 ;
@end

