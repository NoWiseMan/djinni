// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from date.djinni

#import "DBDateRecord+Private.h"
#import "DJIDate.h"
#import <Foundation/Foundation.h>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@implementation DBDateRecord

- (id)initWithDateRecord:(DBDateRecord *)dateRecord
{
    if (self = [super init]) {
        _createdAt = [dateRecord.createdAt copy];
    }
    return self;
}

- (id)initWithCreatedAt:(NSDate *)createdAt
{
    if (self = [super init]) {
        _createdAt = createdAt;
    }
    return self;
}

- (id)initWithCppDateRecord:(const DateRecord &)dateRecord
{
    if (self = [super init]) {
        _createdAt = [NSDate dateWithTimeIntervalSince1970:
                std::chrono::duration_cast<std::chrono::duration<double>>(dateRecord.created_at.time_since_epoch()).count()];
    }
    return self;
}

- (DateRecord)cppDateRecord
{
    std::chrono::system_clock::time_point createdAt = ::djinni::convert_date([_createdAt timeIntervalSince1970]);
    return DateRecord(
            std::move(createdAt));
}

@end
