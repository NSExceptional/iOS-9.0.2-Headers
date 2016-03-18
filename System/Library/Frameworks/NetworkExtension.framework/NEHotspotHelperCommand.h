/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@class NEHotspotNetwork, NSArray, NSString;

@interface NEHotspotHelperCommand : NSObject {

	CNPluginCommandRef _command;

}

@property (readonly) long long commandType; 
@property (readonly) NEHotspotNetwork * network; 
@property (readonly) NSArray * networkList; 
@property (assign) CNPluginCommandRef command;                //@synthesize command=_command - In the implementation block
@property (readonly) NSString * interfaceName; 
-(CNPluginCommandRef)command;
-(id)initWithCommand:(CNPluginCommandRef)arg1 ;
-(id)createResponse:(long long)arg1 ;
-(id)createTCPConnection:(id)arg1 ;
-(id)createUDPSession:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSArray *)networkList;
-(NEHotspotNetwork *)network;
-(NSString *)interfaceName;
-(void)setCommand:(CNPluginCommandRef)arg1 ;
-(long long)commandType;
@end

