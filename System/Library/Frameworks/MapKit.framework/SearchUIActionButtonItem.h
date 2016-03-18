/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:18 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray, NSURL;


@protocol SearchUIActionButtonItem <NSObject>
@property (nonatomic,readonly) unsigned long long actionType; 
@property (nonatomic,copy,readonly) NSString * label; 
@property (nonatomic,readonly) BOOL isOverlay; 
@property (nonatomic,readonly) NSArray * adamIDs; 
@property (nonatomic,readonly) BOOL requiresLocalMedia; 
@property (nonatomic,copy,readonly) NSString * labelForLocalMedia; 
@property (nonatomic,copy,readonly) NSString * localMediaIdentifier; 
@property (nonatomic,readonly) NSURL * punchoutURL; 
@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) NSString * contactIdentifier; 
@optional
-(NSString *)bundleID;
-(NSString *)contactIdentifier;
-(BOOL)requiresLocalMedia;
-(NSArray *)adamIDs;
-(NSString *)localMediaIdentifier;
-(NSURL *)punchoutURL;
-(NSString *)labelForLocalMedia;

@required
-(unsigned long long)actionType;
-(NSString *)label;
-(BOOL)isOverlay;

@end

