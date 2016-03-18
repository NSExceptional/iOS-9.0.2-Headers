/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:03 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, TableViewManager;

@interface RecommendationActionController : NSObject {

	NSString* sectionIdentifier;
	NSString* actionKey;
	TableViewManager* tableManager;

}

@property (nonatomic,retain) NSString * sectionIdentifier; 
@property (nonatomic,retain) NSString * actionKey; 
@property (assign,nonatomic) TableViewManager * tableManager; 
+(id)recommendationActionControllerWithTableManager:(id)arg1 andAssistantUIViewController:(id)arg2 ;
-(TableViewManager *)tableManager;
-(BOOL)isPrimaryRecommendation;
-(id)getSectionInfoWithLongStrings:(BOOL)arg1 ;
-(void)selectPrimaryRecommendation;
-(void)setTableManager:(TableViewManager *)arg1 ;
-(void)setActionKey:(NSString *)arg1 ;
-(NSString *)actionKey;
-(NSString *)sectionIdentifier;
-(void)setSectionIdentifier:(NSString *)arg1 ;
@end

