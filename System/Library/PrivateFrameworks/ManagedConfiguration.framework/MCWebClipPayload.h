/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:17 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSURL, NSString, NSData, NSNumber;

@interface MCWebClipPayload : MCPayload {

	NSURL* _URL;
	NSString* _label;
	NSData* _iconData;
	BOOL _isRemovable;
	BOOL _precomposed;
	BOOL _fullScreen;
	NSString* _savedIdentifier;
	NSNumber* _isRemovableNum;
	NSNumber* _precomposedNum;
	NSNumber* _fullScreenNum;

}

@property (nonatomic,retain,readonly) NSURL * URL;                     //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain,readonly) NSString * label;                //@synthesize label=_label - In the implementation block
@property (nonatomic,retain,readonly) NSData * iconData;               //@synthesize iconData=_iconData - In the implementation block
@property (nonatomic,readonly) BOOL isRemovable;                       //@synthesize isRemovable=_isRemovable - In the implementation block
@property (nonatomic,readonly) BOOL precomposed;                       //@synthesize precomposed=_precomposed - In the implementation block
@property (nonatomic,readonly) BOOL fullScreen;                        //@synthesize fullScreen=_fullScreen - In the implementation block
@property (nonatomic,retain) NSString * savedIdentifier;               //@synthesize savedIdentifier=_savedIdentifier - In the implementation block
@property (nonatomic,readonly) NSNumber * isRemovableNum;              //@synthesize isRemovableNum=_isRemovableNum - In the implementation block
@property (nonatomic,readonly) NSNumber * precomposedNum;              //@synthesize precomposedNum=_precomposedNum - In the implementation block
@property (nonatomic,readonly) NSNumber * fullScreenNum;               //@synthesize fullScreenNum=_fullScreenNum - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)description;
-(id)title;
-(NSString *)label;
-(NSURL *)URL;
-(id)subtitle2Label;
-(BOOL)fullScreen;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)payloadDescriptionKeyValueSections;
-(id)subtitle2Description;
-(BOOL)isRemovable;
-(NSString *)savedIdentifier;
-(NSData *)iconData;
-(BOOL)precomposed;
-(void)setSavedIdentifier:(NSString *)arg1 ;
-(NSNumber *)isRemovableNum;
-(NSNumber *)precomposedNum;
-(NSNumber *)fullScreenNum;
@end

