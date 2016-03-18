/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, PRSImage, NSArray;


@protocol PRSiTunesResult <PRSBaseResult,PRSCardResult>
@property (nonatomic,retain) NSString * templateName; 
@property (nonatomic,retain) NSString * section_header; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * resultDescription; 
@property (assign,nonatomic) BOOL description_nowrap; 
@property (nonatomic,retain) PRSImage * rt_glyph; 
@property (nonatomic,retain) NSString * rt_text; 
@property (assign,nonatomic) BOOL rt_newline; 
@property (assign,nonatomic) float rating; 
@property (nonatomic,retain) NSString * rating_text; 
@property (nonatomic,retain) NSArray * more_glyphs; 
@property (nonatomic,retain) PRSImage * icon; 
@property (nonatomic,retain) NSString * card_title; 
@property (nonatomic,retain) NSString * string_format; 
@optional
-(void)setIcon:(id)arg1;
-(PRSImage *)icon;
-(void)setRating:(float)arg1;
-(float)rating;
-(void)setCard_title:(id)arg1;
-(void)setResultDescription:(id)arg1;
-(void)setDescription_nowrap:(BOOL)arg1;
-(void)setRt_glyph:(id)arg1;
-(void)setRt_text:(id)arg1;
-(void)setRt_newline:(BOOL)arg1;
-(void)setRating_text:(id)arg1;
-(void)setMore_glyphs:(id)arg1;
-(void)setString_format:(id)arg1;
-(NSString *)card_title;
-(PRSImage *)rt_glyph;
-(NSString *)rt_text;
-(NSArray *)more_glyphs;
-(NSString *)resultDescription;
-(BOOL)description_nowrap;
-(NSString *)rating_text;
-(NSString *)string_format;
-(BOOL)rt_newline;

@required
-(void)setTitle:(id)arg1;
-(NSString *)title;
-(void)setSection_header:(id)arg1;
-(void)setTemplateName:(id)arg1;
-(NSString *)templateName;
-(NSString *)section_header;

@end

