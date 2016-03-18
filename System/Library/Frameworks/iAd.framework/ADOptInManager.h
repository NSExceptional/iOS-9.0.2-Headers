/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:55 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ADAdSheetConnectionDelegate.h>
#import <libobjc.A.dylib/ADAdSheetProxyDelegate.h>

@class ADAdSheetConnection, NSString;

@interface ADOptInManager : NSObject <ADAdSheetConnectionDelegate, ADAdSheetProxyDelegate> {

	ADAdSheetConnection* _connection;

}

@property (nonatomic,retain) ADAdSheetConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(ADAdSheetConnection *)connection;
-(void)setConnection:(ADAdSheetConnection *)arg1 ;
-(BOOL)shouldLaunchAdSheet;
-(id)additionalAdSheetLaunchOptions;
-(id)adSheetMachServiceName;
-(void)configureConnection:(id)arg1 ;
-(void)refreshOptInStatus;
-(void)handleAccountChange;
-(void)getiAdIDsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)refreshOptInStatusRefreshingWeakToken:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setOptInStatus:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

