/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:54 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString, NSSet;

@interface WKWebsiteDataRecord : NSObject <WKObject> {

	ObjectStorage<API::WebsiteDataRecord> _websiteDataRecord;

}

@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSSet * dataTypes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(NSString *)description;
-(NSString *)displayName;
-(Object*)_apiObject;
-(NSSet *)dataTypes;
@end

