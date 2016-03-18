/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:39 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/OADClient.h>
#import <libobjc.A.dylib/OADTextClient.h>

@class EDSheet, EDAnchor, EDTextBox, EDComment, NSMutableDictionary, NSString;

@interface EDOfficeArtClient : NSObject <OADClient, OADTextClient> {

	EDSheet* mSheet;
	id mClientState;
	EDAnchor* mAnchor;
	EDTextBox* mTextBox;
	EDComment* mComment;
	NSMutableDictionary* mTableModels;
	CGRect mBounds;
	BOOL mIsBoundsSet;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setComment:(id)arg1 ;
-(CGRect)bounds;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(NSString *)description;
-(BOOL)hasText;
-(id)anchor;
-(void)setAnchor:(id)arg1 ;
-(id)textBox;
-(BOOL)hasBounds;
-(BOOL)areBoundsSet;
-(id)comment;
-(void)setSheet:(id)arg1 ;
-(id)clientState;
-(void)setClientState:(id)arg1 ;
-(id)sheet;
-(id)tableModels;
-(void)setTableModels:(id)arg1 ;
-(void)setTextBox:(id)arg1 ;
@end

