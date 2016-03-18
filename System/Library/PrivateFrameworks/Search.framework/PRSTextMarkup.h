/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, PRSImage;


@protocol PRSTextMarkup
@property (nonatomic,retain) NSString * text; 
@property (assign) BOOL emphasized; 
@property (assign) BOOL bold; 
@property (nonatomic,retain) PRSImage * inlineGlyph; 
@required
-(void)setEmphasized:(BOOL)arg1;
-(NSString *)text;
-(void)setText:(id)arg1;
-(BOOL)bold;
-(void)setBold:(BOOL)arg1;
-(void)setInlineGlyph:(id)arg1;
-(BOOL)emphasized;
-(PRSImage *)inlineGlyph;

@end

