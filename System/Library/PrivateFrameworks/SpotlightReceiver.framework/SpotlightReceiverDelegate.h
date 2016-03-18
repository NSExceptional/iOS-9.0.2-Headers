/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:13 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpotlightReceiver.framework/SpotlightReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <SpotlightReceiver/SpotlightReceiverJob.h>

@protocol SpotlightReceiver;
@class NSObject, NSMutableSet, NSString;

@interface SpotlightReceiverDelegate : NSObject <NSXPCListenerDelegate, SpotlightReceiverJob> {

	NSObject*<SpotlightReceiver> _receiver;
	NSMutableSet* _connections;

}

@property (nonatomic,readonly) NSObject*<SpotlightReceiver> receiver;              //@synthesize receiver=_receiver - In the implementation block
@property (nonatomic,retain) NSMutableSet * connections;                           //@synthesize connections=_connections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)startListening:(id)arg1 withReceiver:(id)arg2 ;
-(NSObject*<SpotlightReceiver>)receiver;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)xpcInterface;
-(NSMutableSet *)connections;
-(void)setConnections:(NSMutableSet *)arg1 ;
-(void)supportedTypes:(/*^block*/id)arg1 ;
-(void)supportedBundleIDs:(/*^block*/id)arg1 ;
-(void)indexFromBundle:(id)arg1 items:(id)arg2 itemsContent:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)deleteFromBundle:(id)arg1 sinceData:(id)arg2 domains:(id)arg3 deletes:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)purgeFromBundle:(id)arg1 identifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)userActions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithReceiver:(id)arg1 ;
@end

