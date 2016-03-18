/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSString;


@protocol PRSRichText
@property (nonatomic,retain) NSArray * formatted_text; 
@property (assign,nonatomic) double star_rating; 
@property (nonatomic,retain) NSArray * more_glyphs; 
@property (nonatomic,retain) NSString * content_advisory; 
@property (nonatomic,retain) NSString * formatted_text_delimiter; 
@property (assign,nonatomic) long long text_maxlines; 
@required
-(void)setMore_glyphs:(id)arg1;
-(void)setFormatted_text:(id)arg1;
-(void)setStar_rating:(double)arg1;
-(void)setContent_advisory:(id)arg1;
-(void)setFormatted_text_delimiter:(id)arg1;
-(void)setText_maxlines:(long long)arg1;
-(NSArray *)more_glyphs;
-(long long)text_maxlines;
-(NSArray *)formatted_text;
-(NSString *)formatted_text_delimiter;
-(NSString *)content_advisory;
-(double)star_rating;

@end

