/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:41 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSDownload, NSObject, NSString, NSNumber, NSURL;

@interface ISUDownload : NSObject {

	SSDownload* _download;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) SSDownload * managedDownload; 
@property (nonatomic,readonly) NSString * artistName; 
@property (getter=isContentRestricted,nonatomic,readonly) BOOL contentRestricted; 
@property (nonatomic,readonly) NSString * phaseIdentifier; 
@property (nonatomic,readonly) NSNumber * storeItemIdentifier; 
@property (nonatomic,readonly) NSNumber * storePreorderIdentifier; 
@property (nonatomic,readonly) NSURL * thumbnailImageURL; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) long long bytesDownloaded; 
@property (nonatomic,readonly) long long bytesTotal; 
@property (nonatomic,readonly) double estimatedSecondsRemaining; 
@property (getter=isPurchase,nonatomic,readonly) BOOL purchase; 
@property (nonatomic,readonly) double percentComplete; 
@property (nonatomic,readonly) NSString * statusDescription; 
@property (getter=isPausable,nonatomic,readonly) BOOL pausable; 
+(void)initialize;
+(id)downloadProperties;
+(id)downloadExternalProperties;
-(BOOL)isPausable;
-(NSString *)phaseIdentifier;
-(long long)bytesDownloaded;
-(long long)bytesTotal;
-(void)dealloc;
-(double)percentComplete;
-(NSString *)title;
-(NSNumber *)storeItemIdentifier;
-(NSString *)artistName;
-(NSURL *)thumbnailImageURL;
-(id)initWithManagedDownload:(id)arg1 ;
-(BOOL)isContentRestricted;
-(NSString *)statusDescription;
-(double)estimatedSecondsRemaining;
-(id)copyLocalizedStatusString;
-(BOOL)isPurchase;
-(SSDownload *)managedDownload;
-(void)resetPreorderState;
-(void)setManagedDownload:(SSDownload *)arg1 ;
-(NSNumber *)storePreorderIdentifier;
@end

