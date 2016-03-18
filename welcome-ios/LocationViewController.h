#import <UIKit/UIKit.h>

@interface LocationViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIBarButtonItem *sidebarButton;

@property (weak, nonatomic) IBOutlet UITextField *latitude;
@property (weak, nonatomic) IBOutlet UITextField *longitude;
@property (weak, nonatomic) IBOutlet UIButton *weatherButton;

@property (weak, nonatomic) IBOutlet UILabel *weatherDescription;
@property (weak, nonatomic) IBOutlet UILabel *weatherDate;
@property (weak, nonatomic) IBOutlet UILabel *weatherLow;
@property (weak, nonatomic) IBOutlet UILabel *weatherHigh;

@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *loading;

@end
