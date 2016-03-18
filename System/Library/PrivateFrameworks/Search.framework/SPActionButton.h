/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Search/SPProxyObject.h>
#import <libobjc.A.dylib/PRSActionButton.h>

@class NSString, NSArray;

@interface SPActionButton : SPProxyObject <PRSActionButton> {

	NSString* _contactIdentifier;

}

@property (retain) NSString * contactIdentifier;                    //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * provider; 
@property (assign,nonatomic) BOOL is_overlay; 
@property (nonatomic,retain) NSString * type; 
@property (nonatomic,retain) NSString * label; 
@property (nonatomic,retain) NSString * label_itunes; 
@property (nonatomic,retain) NSArray * adam_ids; 
@property (assign,nonatomic) BOOL streaming; 
@property (nonatomic,retain) id<PRSApp> punchout; 
-(NSString *)contactIdentifier;
-(void)setContactIdentifier:(NSString *)arg1 ;
@end

