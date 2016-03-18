/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Search/SPFeedback.h>

@class NSDictionary, NSArray;

@interface SPFeedbackRender : SPFeedback {

	BOOL _leftOfHome;
	double _triggerTimestamp;
	NSDictionary* _renderedZKW;
	NSArray* _renderedZKWMaps;
	NSArray* _hiddentExtResults;
	NSArray* _sections;

}

@property (assign,nonatomic) double triggerTimestamp;                  //@synthesize triggerTimestamp=_triggerTimestamp - In the implementation block
@property (nonatomic,retain) NSDictionary * renderedZKW;               //@synthesize renderedZKW=_renderedZKW - In the implementation block
@property (nonatomic,retain) NSArray * renderedZKWMaps;                //@synthesize renderedZKWMaps=_renderedZKWMaps - In the implementation block
@property (nonatomic,retain) NSArray * hiddentExtResults;              //@synthesize hiddentExtResults=_hiddentExtResults - In the implementation block
@property (assign,nonatomic) BOOL leftOfHome;                          //@synthesize leftOfHome=_leftOfHome - In the implementation block
@property (nonatomic,retain) NSArray * sections;                       //@synthesize sections=_sections - In the implementation block
-(id)parsecFeedbackFromSession:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(double)triggerTimestamp;
-(NSDictionary *)renderedZKW;
-(NSArray *)renderedZKWMaps;
-(BOOL)leftOfHome;
-(void)setTriggerTimestamp:(double)arg1 ;
-(NSArray *)hiddentExtResults;
-(void)setHiddentExtResults:(NSArray *)arg1 ;
-(void)setRenderedZKW:(NSDictionary *)arg1 ;
-(void)setRenderedZKWMaps:(NSArray *)arg1 ;
-(void)setLeftOfHome:(BOOL)arg1 ;
@end

