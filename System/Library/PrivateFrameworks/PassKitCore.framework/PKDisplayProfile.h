/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKDisplayProfile : NSObject <NSSecureCoding, NSCopying> {

	long long _type;

}

@property (nonatomic,readonly) long long type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)displayProfileOfType:(long long)arg1 withDictionary:(id)arg2 bundle:(id)arg3 ;
+(Class)classForDisplayProfileType:(long long)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
