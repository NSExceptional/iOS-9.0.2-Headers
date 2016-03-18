/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:09 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BBRemoteDataProvider.h>

@class BBDataProviderProxy, NSMutableDictionary, HMDHomeManager, NSString;

@interface HMDBulletinProvider : NSObject <NSSecureCoding, BBRemoteDataProvider> {

	BBDataProviderProxy* _proxy;
	NSMutableDictionary* _bulletins;
	HMDHomeManager* _homeManager;

}

@property (assign,nonatomic) BBDataProviderProxy * proxy;                      //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bulletins;                  //@synthesize bulletins=_bulletins - In the implementation block
@property (assign,nonatomic,__weak) HMDHomeManager * homeManager;              //@synthesize homeManager=_homeManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)sortDescriptors;
-(BBDataProviderProxy *)proxy;
-(void)setProxy:(BBDataProviderProxy *)arg1 ;
-(HMDHomeManager *)homeManager;
-(void)configure:(id)arg1 ;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(void)configureHomeManager:(id)arg1 ;
-(void)reloadDefaultSectionInfo;
-(NSMutableDictionary *)bulletins;
-(void)insertBulletinWithTitle:(id)arg1 message:(id)arg2 recordID:(id)arg3 context:(NSDictionary*)arg4 ;
-(id)sortedBulletinsByDate;
-(void)removeBulletin:(id)arg1 ;
-(void)removeBulletinWithRecordID:(id)arg1 ;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)sectionParameters;
-(id)defaultSubsectionInfos;
-(id)displayNameForSubsectionID:(id)arg1 ;
-(BOOL)syncsBulletinDismissal;
-(id)displayNameForFilterID:(id)arg1 ;
-(id)defaultSectionInfo;
-(id)sectionDisplayName;
-(void)insertBulletinWithTitle:(id)arg1 message:(id)arg2 recordID:(id)arg3 ;
-(void)updateBulletin:(id)arg1 ;
-(void)cullBulletinsToCount:(unsigned long long)arg1 ;
-(void)setBulletins:(NSMutableDictionary *)arg1 ;
-(id)sectionIdentifier;
@end

