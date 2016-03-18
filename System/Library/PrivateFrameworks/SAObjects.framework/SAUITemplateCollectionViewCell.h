/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:01 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUITemplateBaseItem.h>
#import <SAObjects/SAUITemplateMonogrammable.h>

@class NSArray, SAUIImageResource, NSString;

@interface SAUITemplateCollectionViewCell : SAUITemplateBaseItem <SAUITemplateMonogrammable>

@property (nonatomic,retain) SAUIImageResource * image; 
@property (nonatomic,copy) NSArray * monogramName; 
@property (nonatomic,copy) NSString * subtitleText; 
@property (nonatomic,copy) NSString * titleText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)collectionViewCell;
+(id)collectionViewCellWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(SAUIImageResource *)image;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)monogramName;
-(void)setMonogramName:(NSArray *)arg1 ;
-(void)setSubtitleText:(NSString *)arg1 ;
-(NSString *)subtitleText;
@end

