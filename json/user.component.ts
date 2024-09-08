import { Component } from '@angular/core';
import { FormControl, FormGroup } from '@angular/forms';
import { ToastrService } from 'ngx-toastr';
import { DataserviceService } from '../dataservice.service';


@Component({
    selector: 'app-user',
    templateUrl: './user.component.html',
    styleUrls: ['./user.component.css']
})
export class UserComponent {
    userform: FormGroup | any;
    data: any;
    isedit: boolean = false;
    username: any;
    usernameShow: any;


    constructor(private _dataservice: DataserviceService, private _toast: ToastrService) { }

    ngOnInit(): void {
        this.userform = new FormGroup({
            'name': new FormControl(),
            'email': new FormControl(),
            'phone': new FormControl(),
            'website': new FormControl()
        })
        this.getdata();
    }
    update(user: any) {
        this.userform.id = user.id;
        this.usernameShow = this.userform.value.name;
        this._dataservice.update(this.userform.id, this.userform.value).subscribe(res => {
            this.showInfo();
            this.getdata();
        })

    }
    sendata(userform: FormGroup) {
        this.data.push(this.userform.value);
        this.username = this.userform.value.name;
        this._dataservice.postdata(this.userform.value).subscribe(res => {
            this.showSuccess();
            this.getdata();
        })
    }

    getdata() {
        this._dataservice.getdata().subscribe(res => {
            this.data = res;
        })
    }

    addmodel() {
        this.isedit = false;
        this.userform.reset();
    }

    edit(i: any, user: any) {
        this.isedit = true;
        this.userform.id = user.id;
        this.userform.setValue({
            name: user.name,
            email: user.email,
            phone: user.phone,
            website: user.website
        })
    }

    delete(index: number, user: any) {
        this.userform.id = user.id;
        this._dataservice.delete(this.userform.id, user).subscribe(res => {
            this.data.splice(index, 1);
            this.showError();
        })
    }





    public showSuccess(): void {
        this._toast.success('User Data Successfully Added', this.username);
    }

    public showInfo(): void {
        this._toast.info('Data Has Successfully Updated', this.usernameShow)
    }

    public showError(): void {
        this._toast.error('Data Has Deleted');
    }

}
