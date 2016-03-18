/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Search/SPSection.h>
#import <libobjc.A.dylib/PRSDescriptionSection.h>

@class NSString, PRSImage, NSURL;

@interface SPDescriptionSection : SPSection <PRSDescriptionSection>

@property (nonatomic,retain) NSString * type; 
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,retain) NSURL * attribution_url; 
@property (assign,nonatomic) BOOL hide_divider; 
@property (assign,nonatomic) BOOL card_padding_bottom; 
@property (assign,nonatomic) BOOL card_padding_top; 
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) BOOL title_nowrap; 
@property (assign,nonatomic) long long title_weight; 
@property (nonatomic,retain) NSString * resultDescription; 
@property (assign,nonatomic) long long description_maxlines; 
@property (assign,nonatomic) BOOL description_expand; 
@property (nonatomic,retain) NSString * description_expand_text; 
@property (assign,nonatomic) long long description_size; 
@property (assign,nonatomic) long long description_weight; 
@property (nonatomic,retain) PRSImage * image; 
@property (nonatomic,retain) NSString * image_align; 
@end

