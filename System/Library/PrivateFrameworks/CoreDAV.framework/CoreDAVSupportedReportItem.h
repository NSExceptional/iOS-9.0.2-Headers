/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItem;

@interface CoreDAVSupportedReportItem : CoreDAVItem {

	CoreDAVItem* _report;

}

@property (nonatomic,retain) CoreDAVItem * report;              //@synthesize report=_report - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setReport:(CoreDAVItem *)arg1 ;
-(CoreDAVItem *)report;
@end

