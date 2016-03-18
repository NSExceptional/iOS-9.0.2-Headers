/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:36 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSString;

@interface OADTableStyleCollection : NSObject {

	NSMutableArray* _styles;
	NSMutableDictionary* _styleMap;
	NSString* _defaultTableStyleId;

}

@property (nonatomic,copy) NSString * defaultTableStyleId;              //@synthesize defaultTableStyleId=_defaultTableStyleId - In the implementation block
-(void)dealloc;
-(id)init;
-(void)addTableStyle:(id)arg1 ;
-(id)tableStyles;
-(id)tableStyleWithId:(id)arg1 ;
-(NSString *)defaultTableStyleId;
-(void)setDefaultTableStyleId:(NSString *)arg1 ;
@end

