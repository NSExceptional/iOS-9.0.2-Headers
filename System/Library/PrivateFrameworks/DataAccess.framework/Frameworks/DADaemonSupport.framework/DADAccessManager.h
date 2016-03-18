/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:41 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccessExpress/DADisableableObject.h>

@protocol OS_xpc_object;
@class NSObject, NSMutableArray;

@interface DADAccessManager : DADisableableObject {

	NSObject*<OS_xpc_object> _mainConnection;
	NSMutableArray* _clients;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> mainConnection;              //@synthesize mainConnection=_mainConnection - In the implementation block
@property (nonatomic,retain) NSMutableArray * clients;                             //@synthesize clients=_clients - In the implementation block
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)removeClient:(id)arg1 ;
-(void)setMainConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)mainConnection;
-(void)_setupServerConnection;
-(NSMutableArray *)clients;
-(void)setClients:(NSMutableArray *)arg1 ;
@end

