/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:00 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class SAMovieV2MovieDetailSnippet, NSString, NSArray;

@interface SAMovieV2TheaterShowtimeListSnippet : SAUISnippet

@property (nonatomic,retain) SAMovieV2MovieDetailSnippet * movieDetailSnippet; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSArray * theaterShowtimeListCells; 
@property (nonatomic,copy) NSString * title; 
+(id)theaterShowtimeListSnippet;
+(id)theaterShowtimeListSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAMovieV2MovieDetailSnippet *)movieDetailSnippet;
-(void)setMovieDetailSnippet:(SAMovieV2MovieDetailSnippet *)arg1 ;
-(NSArray *)theaterShowtimeListCells;
-(void)setTheaterShowtimeListCells:(NSArray *)arg1 ;
@end
